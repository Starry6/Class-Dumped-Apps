@interface IDSNoteMessageReceivedMetric : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) NSNumber accountType;
@property (nonatomic) BOOL fromStorage;
@property (nonatomic) double serverTimestamp;
@property (nonatomic) double localTimeDelta;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)accountType;
- (id)service;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (double)serverTimestamp;
- (BOOL)fromStorage;
- (id)initWithService:accountType:fromStorage:serverTimestamp:localTimeDelta:;
- (double)localTimeDelta;
@end
