@interface CSJPerformanceJSModel : NSObject
@property (nonatomic) NSString URL;
@property (nonatomic) NSArray executeTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExecuteTime:;
- (id)executeTime;
- (BOOL)modelCustomTransformFromDictionary:;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
+ (id)modelCustomPropertyMapper;
+ (BOOL)supportsSecureCoding;
+ (id)fromDictionary:;
@end
