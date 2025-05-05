@interface TUMetadataItem : NSObject
@property (nonatomic) NSMutableDictionary callMetadata;
@property (nonatomic) BOOL empty;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (void)setMetadata:forProvider:;
- (id)metadataForProvider:;
- (id)callMetadata;
@end
