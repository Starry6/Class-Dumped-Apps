@interface SIOrderedEvent : NSObject
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) SILogicalTimestamp logicalTimestamp;
@property (nonatomic) SISchemaTopLevelUnionType topLevelUnionType;
- (unsigned int)dataVersion;
- (void).cxx_destruct;
- (id)serialize;
- (id)logicalTimestamp;
- (id)initWithTimestamp:topLevelUnionType:;
- (id)initWithInternalType:;
- (id)topLevelUnionType;
+ (id)eventWithData:dataVersion:;
+ (id)deserializeFromData:;
@end
