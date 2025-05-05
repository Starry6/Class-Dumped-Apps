@interface CSJInsertJSConfigModel : NSObject
@property (nonatomic) CSJPerformanceJSModel performanceJS;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)performanceJS;
- (void)setPerformanceJS:;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (BOOL)supportsSecureCoding;
+ (id)fromDictionary:;
@end
