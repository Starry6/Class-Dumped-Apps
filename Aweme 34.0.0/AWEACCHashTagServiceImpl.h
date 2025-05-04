@interface AWEACCHashTagServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hashTagRegExp;
- (id)endWithHashTagRegExp;
- (id)resolveHashTagsWithText:;
- (void)handleHashTags:withSpecialHashtags:withPlainText:;
- (id)savedHashtags;
- (id)savedPrivateHashtags;
- (void)historySaveHashTags:isPrivate:;
@end
