@interface CTNRStatus : NSObject
@property (nonatomic) BOOL isSADisabled;
@property (nonatomic) Q saDisabledReasonMask;
@property (nonatomic) BOOL isNSADisabled;
@property (nonatomic) Q nsaDisabledReasonMask;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSADisabled:saReasonMask:nsaDisabled:nsaReasonMask:;
- (BOOL)isSADisabled;
- (void)setIsSADisabled:;
- (unsigned long long)saDisabledReasonMask;
- (void)setSaDisabledReasonMask:;
- (BOOL)isNSADisabled;
- (void)setIsNSADisabled:;
- (unsigned long long)nsaDisabledReasonMask;
- (void)setNsaDisabledReasonMask:;
+ (BOOL)supportsSecureCoding;
+ (id)default;
@end
