@interface FLEXMethodDescription : NSObject
@property (nonatomic) {objc_method_description=:*} objc_description;
@property (nonatomic) : selector;
@property (nonatomic) NSString typeEncoding;
@property (nonatomic) c returnType;
@property (nonatomic) NSNumber instance;
- (id)init;
- (id)initWithDescription:instance:;
- (id)description;
- (id)debugDescription;
- (id)objc_description;
- (SEL)selector;
- (id)typeEncoding;
- (char)returnType;
- (id)instance;
- (void).cxx_destruct;
+ (id)description:;
+ (id)description:instance:;
@end
