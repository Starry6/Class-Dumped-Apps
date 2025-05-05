@interface TKSmartCardUserInteraction : NSObject
@property (nonatomic) <TKSmartCardUserInteractionDelegate> delegate;
@property (nonatomic) double initialTimeout;
@property (nonatomic) double interactionTimeout;
- (id)init;
- (BOOL)cancel;
- (void)setDelegate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)delegate;
- (void).cxx_destruct;
- (void)runWithReply:;
- (double)initialTimeout;
- (void)setInitialTimeout:;
- (double)interactionTimeout;
- (void)setInteractionTimeout:;
+ (BOOL)supportsSecureCoding;
@end
