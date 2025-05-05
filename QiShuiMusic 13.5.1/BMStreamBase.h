@interface BMStreamBase : NSObject
@property (nonatomic) BMStoreStream storeStream;
@property (nonatomic) BMStreamConfiguration configuration;
@property (nonatomic) NSString identifier;
@property (nonatomic) BMSQLSchema schema;
- (id)schema;
- (id)storeStream;
- (id)DSLPublisher;
- (id)pruner;
- (id)publisher;
- (id)identifier;
- (id)initWithIdentifier:schema:configuration:;
- (id)configuration;
- (id)publisherWithOptions:;
- (void).cxx_destruct;
- (id)source;
- (BOOL)isEqual:;
@end
