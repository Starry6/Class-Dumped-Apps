@interface IDSLocalMessageSentMetric : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I awdIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) PBCodable<NSCopying> awdRepresentation;
@property (nonatomic) NSString service;
@property (nonatomic) BOOL isToDefaultPairedDevice;
@property (nonatomic) q messageSize;
@property (nonatomic) Q linkType;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)service;
- (id)awdRepresentation;
- (void).cxx_destruct;
- (unsigned int)awdIdentifier;
- (id)name;
- (long long)messageSize;
- (id)dictionaryRepresentation;
- (unsigned long long)linkType;
- (long long)priority;
- (BOOL)isToDefaultPairedDevice;
- (id)initWithService:isToDefaultPairedDevice:messageSize:linkType:priority:;
@end
