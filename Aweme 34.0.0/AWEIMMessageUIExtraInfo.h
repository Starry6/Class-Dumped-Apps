@interface AWEIMMessageUIExtraInfo : NSObject
@property (nonatomic) BOOL isShareCard;
@property (nonatomic) BOOL isSendFromMe;
@property (nonatomic) UIColor designatedColor;
@property (nonatomic) BOOL hasChatBackgroundImg;
- (void)setHasChatBackgroundImg:;
- (void)setIsSendFromMe:;
- (BOOL)isSendFromMe;
- (void)setIsShareCard:;
- (BOOL)isShareCard;
- (BOOL)hasChatBackgroundImg;
- (id)designatedColor;
- (void)setDesignatedColor:;
- (void).cxx_destruct;
@end
