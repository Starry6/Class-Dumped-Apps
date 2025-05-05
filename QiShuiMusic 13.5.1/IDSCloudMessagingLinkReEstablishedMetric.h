@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I awdIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) PBCodable<NSCopying> awdRepresentation;
@property (nonatomic) double inactiveTime;
@property (nonatomic) Q linkType;
@property (nonatomic) Q priorLinkType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awdRepresentation;
- (unsigned int)awdIdentifier;
- (id)name;
- (id)dictionaryRepresentation;
- (unsigned long long)linkType;
- (id)initWithInactiveTime:linkType:priorLinkType:;
- (double)inactiveTime;
- (unsigned long long)priorLinkType;
@end
