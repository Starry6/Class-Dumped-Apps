@interface BMStreamConfiguration : NSObject
@property (nonatomic) NSString streamIdentifier;
@property (nonatomic) # eventClass;
@property (nonatomic) BMStoreConfig storeConfig;
@property (nonatomic) NSArray alternativeNames;
@property (nonatomic) BMStreamSyncPolicy syncPolicy;
- (id)streamIdentifier;
- (id)init;
- (id)alternativeNames;
- (id)syncPolicy;
- (id)storeConfig;
- (id)initWithStreamIdentifier:eventClass:storeConfig:syncPolicy:alternativeNames:;
- (void).cxx_destruct;
- (Class)eventClass;
@end
