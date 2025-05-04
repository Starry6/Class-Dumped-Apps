@interface AWEIMEmojiRecommendManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasShowEmojiRecommendPopupView;
- (BOOL)hasShowEmojiRecommendPopUpViewServerRecord;
+ (id)sharedIntance;
+ (id)frequencyControlModel;
+ (BOOL)canShowEmojiRecommendPopupView;
+ (void)showEmojiRecommendPopupView;
+ (void)showEmojiRecommendPopupViewWithCloseBlock:;
+ (BOOL)isEmojiRecommendPopupViewShowing;
@end
