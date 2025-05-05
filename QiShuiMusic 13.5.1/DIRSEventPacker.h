@interface DIRSEventPacker : NSObject
@property (nonatomic) Q maxPackLength;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_initPacket;
- (void)appendCommonParameters:;
- (void)appendFeatureOptions:;
- (void)appendFeatureParameters:;
- (unsigned long long)maxPackLength;
- (id)packetEvents;
- (void)setMaxPackLength:;
- (id)init;
- (id)objectValue;
- (long long)appendEvent:;
- (id)serializedData;
- (void).cxx_destruct;
- (void)_estimate;
- (id)eventIDs;
- (unsigned long long)estimatedLength;
@end
