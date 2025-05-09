@interface AWETrackerDataTransmissionBlockConfig : NSObject
@property (nonatomic) BOOL forAll;
@property (nonatomic) NSString sourceClass;
@property (nonatomic) Q sourceAddr;
@property (nonatomic) NSString attachedObjClass;
@property (nonatomic) Q attachedObjAddr;
@property (nonatomic) @ source;
@property (nonatomic) @ attachedObj;
@property (nonatomic) NSString eventName;
@property (nonatomic) @? block;
- (void)setAttachedObj:;
- (void)setForAll:;
- (id)infoBuilder;
- (id)attachedObj;
- (BOOL)forAll;
- (id)sourceClass;
- (void)setSourceClass:;
- (unsigned long long)sourceAddr;
- (void)setSourceAddr:;
- (id)attachedObjClass;
- (void)setAttachedObjClass:;
- (unsigned long long)attachedObjAddr;
- (void)setAttachedObjAddr:;
- (id)init;
- (void)setEventName:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)eventName;
+ (id)config;
@end
