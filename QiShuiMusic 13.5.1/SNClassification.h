@interface SNClassification : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) double confidence;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)confidence;
- (id)init;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:confidence:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
