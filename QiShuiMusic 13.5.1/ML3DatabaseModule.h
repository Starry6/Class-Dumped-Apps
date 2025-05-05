@interface ML3DatabaseModule : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) ^{sqlite3_module=i^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?^?} moduleMethods;
@property (nonatomic) <ML3DatabaseModuleContext> context;
- (id)context;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setContext:;
- (id)initWithName:moduleMethods:;
- (id)moduleMethods;
@end
