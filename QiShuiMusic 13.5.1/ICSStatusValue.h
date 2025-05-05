@interface ICSStatusValue : ICSPredefinedValue
@property (nonatomic) NSString statusString;
- (void)setStatusString:;
- (id)statusString;
- (void)_ICSStringWithOptions:appendingToString:;
- (void).cxx_destruct;
- (Class)classForCoder;
+ (id)statusValueFromICSString:;
+ (id)statusTypeFromCode:;
+ (id)statusTypeFromCode:statusString:;
@end
