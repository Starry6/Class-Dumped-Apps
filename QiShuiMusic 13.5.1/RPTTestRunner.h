@interface RPTTestRunner : NSObject
@property (nonatomic) RPTSettings settings;
@property (nonatomic) RCPInlinePlayer inlinePlayer;
@property (nonatomic) RPTInteractionOptions interactionOptions;
- (id)settings;
- (void)setSettings:;
- (id)interactionOptions;
- (void)runTestWithParameters:;
- (void)setInteractionOptions:;
- (void)playInteraction:completionHandler:;
- (void).cxx_destruct;
- (id)initWithInteractionOptions:;
- (BOOL)_manageTestStartAndEndForParameters:;
- (id)inlinePlayer;
- (void)runTestWithParameters:resultHandler:;
+ (BOOL)isRecapAvailable;
+ (void)runTestWithParameters:;
+ (void)playInteraction:completionHandler:;
+ (void)runTestWithParameters:resultHandler:;
@end
