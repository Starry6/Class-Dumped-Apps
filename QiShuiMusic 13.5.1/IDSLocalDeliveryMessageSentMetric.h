@interface IDSLocalDeliveryMessageSentMetric : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) BOOL isToDefaultPairedDevice;
@property (nonatomic) Q messageSize;
@property (nonatomic) Q linkType;
@property (nonatomic) Q priority;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)service;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)messageSize;
- (id)dictionaryRepresentation;
- (unsigned long long)linkType;
- (unsigned long long)priority;
- (BOOL)isToDefaultPairedDevice;
- (id)initWithService:isToDefaultPairedDevice:messageSize:linkType:priority:;
@end
