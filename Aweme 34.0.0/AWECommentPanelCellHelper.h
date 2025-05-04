@interface AWECommentPanelCellHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)matchEmoticonForAttributedString:;
+ (id)getUserName:;
+ (void)transferToProfileWithURL:userModel:;
+ (id)matchEmoticonToAccessibilityLabel:;
+ (double)cellHeightDiffBeforeAndAfterFolding:comment:;
+ (id)defaultAvatarImage;
+ (void)transferToProfileWithURL:userModel:adModel:;
+ (id)verticalPathWithHeight:;
+ (id)commentBundle;
+ (id)avatarImageWithColor:;
+ (double)cellStillHeightCommentContentHiddenForSubComment:;
@end
