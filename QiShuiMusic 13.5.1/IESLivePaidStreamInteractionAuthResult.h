@interface IESLivePaidStreamInteractionAuthResult : NSObject
@property (nonatomic) BOOL disabled;
@property (nonatomic) NSString disabledToast;
- (id)initWithDisabled:disabledTaost:;
- (id)disabledToast;
- (BOOL)isDisabled;
- (void).cxx_destruct;
+ (id)defaultAuthResult;
@end
