@interface AWESocialRelationTagService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableTagUIUpdate;
- (id)mateTagText;
- (id)mateTagBGColor;
- (id)closeFriendTagText;
- (id)closeFriendTagBGColor;
- (id)closeFriendTagColor;
- (id)mateTagColor;
- (id)getColorWithColorStr:;
@end
