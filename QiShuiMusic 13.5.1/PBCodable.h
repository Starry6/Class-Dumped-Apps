@interface PBCodable : NSObject
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSData data;
- (void)setClientMetricsIfSupported:;
- (unsigned int)dataVersion;
- (id)serialize;
- (id)plistArchiveWithCPLArchiver:;
- (id)initWithCPLArchiver:;
- (id)mr_valueForPotentiallyUndefinedKey:;
- (id)si_dictionaryRepresentation;
- (id)init;
- (id)formattedText;
- (id)data;
- (void)writeTo:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
+ (id)eventWithData:dataVersion:;
+ (BOOL)supportsSecureCoding;
+ (id)options;
@end
