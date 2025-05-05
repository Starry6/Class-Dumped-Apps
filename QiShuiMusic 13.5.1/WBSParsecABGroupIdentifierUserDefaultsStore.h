@interface WBSParsecABGroupIdentifierUserDefaultsStore : NSObject
@property (nonatomic) <WBSParsecABGroupStoreClient> client;
@property (nonatomic) NSNumber groupIdentifier;
@property (nonatomic) NSDate generationDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)groupIdentifier;
- (void)setGroupIdentifier:;
- (void)setClient:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)client;
- (void).cxx_destruct;
- (id)generationDate;
- (void)setGenerationDate:;
@end
