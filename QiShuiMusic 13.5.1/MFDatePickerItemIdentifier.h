@interface MFDatePickerItemIdentifier : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) Q type;
- (id)identifier;
- (unsigned long long)hash;
- (unsigned long long)type;
- (id)initWithIdentifier:type:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
