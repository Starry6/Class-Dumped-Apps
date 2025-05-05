@interface MPTimedMetadata : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString keyspace;
@property (nonatomic) @ value;
@property (nonatomic) double timestamp;
@property (nonatomic) NSDictionary allMetadata;
- (id)init;
- (id)key;
- (void).cxx_destruct;
- (double)timestamp;
- (id)value;
- (id)_initWithMetadataItem:;
- (id)keyspace;
- (id)allMetadata;
@end
