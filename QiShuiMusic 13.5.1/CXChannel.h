@interface CXChannel : NSObject
@property (nonatomic) NSString localizedName;
@property (nonatomic) q transmissionMode;
@property (nonatomic) NSUUID UUID;
- (BOOL)isEqualToChannel:;
- (id)localizedName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)archivedDataWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)transmissionMode;
- (id)initWithUUID:transmissionMode:;
- (id)initWithChannel:;
- (BOOL)isEquivalentToChannel:;
+ (BOOL)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:error:;
@end
