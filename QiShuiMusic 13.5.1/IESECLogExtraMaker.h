@interface IESECLogExtraMaker : NSObject
@property (nonatomic) NSString moduleName;
@property (nonatomic) q eventStatus;
@property (nonatomic) IESECLogScene context;
- (void)setModuleName:;
- (void)setValue:forKey:;
- (id)context;
- (id)moduleName;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setEventStatus:;
- (long long)eventStatus;
@end
