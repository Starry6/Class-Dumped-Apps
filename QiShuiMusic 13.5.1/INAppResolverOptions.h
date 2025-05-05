@interface INAppResolverOptions : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) BOOL includeUserActivityTypes;
@property (nonatomic) BOOL skipSupportedIntentsCheck;
- (id)dictionary;
- (BOOL)includeUserActivityTypes;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)skipSupportedIntentsCheck;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)optionsWithDictionary:;
@end
