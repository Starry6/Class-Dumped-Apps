@interface UIKeyboardCameraSessionRTIConfiguration : NSObject
@property (nonatomic) BOOL isWebKitInteractionView;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) BOOL shouldSuppressKeyboard;
- (BOOL)isSingleLineDocument;
- (void)setIsSingleLineDocument:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isWebKitInteractionView;
- (void)setIsWebKitInteractionView:;
- (BOOL)shouldSuppressKeyboard;
- (void)setShouldSuppressKeyboard:;
+ (BOOL)supportsSecureCoding;
@end
