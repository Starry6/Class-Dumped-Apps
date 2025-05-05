@interface IDSServerStorageStateMachineCompletedMetric : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) q linkType;
@property (nonatomic) BOOL wasPrimary;
@property (nonatomic) double timeTaken;
@property (nonatomic) q numberProcessed;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)service;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (long long)linkType;
- (id)initWithService:linkType:wasPrimary:timeTaken:numberProcessed:;
- (BOOL)wasPrimary;
- (double)timeTaken;
- (long long)numberProcessed;
@end
