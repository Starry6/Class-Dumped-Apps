@interface NSMassFormatter : NSFormatter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSNumberFormatter numberFormatter;
@property (nonatomic) q unitStyle;
@property (nonatomic) BOOL forPersonMassUse;
- (long long)unitStyle;
- (id)numberFormatter;
- (id)stringForObjectValue:;
- (void)setUnitStyle:;
- (void)receiveObservedValue:;
- (id)init;
- (void)dealloc;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)initWithCoder:;
- (id)unitStringFromValue:unit:;
- (void)encodeWithCoder:;
- (void)setNumberFormatter:;
- (id)copyWithZone:;
- (id)attributedStringForObjectValue:withDefaultAttributes:;
- (id)stringFromValue:unit:;
- (long long)targetUnitFromKilograms:;
- (id)unitStringFromKilograms:usedUnit:;
- (id)stringFromKilograms:;
- (BOOL)isForPersonMassUse;
- (void)setForPersonMassUse:;
@end
