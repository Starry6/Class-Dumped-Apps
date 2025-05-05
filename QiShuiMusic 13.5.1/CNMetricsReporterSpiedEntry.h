@interface CNMetricsReporterSpiedEntry : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSString event;
@property (nonatomic) BOOL logged;
- (id)dictionary;
- (id)event;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)isLogged;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDictionary:event:logged:;
+ (BOOL)supportsSecureCoding;
@end
