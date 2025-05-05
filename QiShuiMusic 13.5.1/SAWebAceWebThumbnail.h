@interface SAWebAceWebThumbnail : SAWebAcePicture
@property (nonatomic) NSURL url;
- (id)url;
- (id)groupIdentifier;
- (void)setUrl:;
- (id)encodedClassName;
+ (id)aceWebThumbnail;
+ (id)aceWebThumbnailWithDictionary:context:;
@end
