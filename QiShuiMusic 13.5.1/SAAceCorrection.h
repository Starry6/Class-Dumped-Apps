@interface SAAceCorrection : SADomainObject
@property (nonatomic) NSData correctionEntryData;
@property (nonatomic) NSString debugString;
- (id)groupIdentifier;
- (id)debugString;
- (id)encodedClassName;
- (void)setDebugString:;
- (id)correctionEntryData;
- (void)setCorrectionEntryData:;
+ (id)aceCorrection;
+ (id)aceCorrectionWithDictionary:context:;
@end
