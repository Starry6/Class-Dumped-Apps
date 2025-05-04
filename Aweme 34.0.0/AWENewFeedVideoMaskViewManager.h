@interface AWENewFeedVideoMaskViewManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldUseNewFeedBottomMaskImageWithModel:referString:;
+ (unsigned long long)getBottomMaskImageTypeWithModel:referString:;
+ (id)getBottomGradientViewWithType:;
+ (BOOL)shouldGetNewMaskForVideo;
+ (BOOL)shouldGetNewMaskForOwnerVideo;
+ (BOOL)shouldGetNewMaskForVideoWithCaption;
+ (BOOL)shouldGetNewMaskForNOCaptionVideo;
+ (BOOL)shouldUseNewIcon;
+ (id)getABSettings;
+ (long long)getBottomGradientViewHeightWithModel:referString:originHeight:;
+ (BOOL)shouldUseNewFeedBottomMaskIcon:referString:;
@end
