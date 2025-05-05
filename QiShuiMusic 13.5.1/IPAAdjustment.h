@interface IPAAdjustment : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) IPAAdjustmentVersion version;
@property (nonatomic) NSDictionary settings;
- (id)init;
- (id)settings;
- (void)setVersion:;
- (id)version;
- (void)setSettings:;
- (id)identifier;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToAdjustment:;
- (id)_debugDescriptionSuffix;
@end
