@interface AVMetadataObjectCollection : NSObject
@property (nonatomic) {?=qiIq} time;
@property (nonatomic) NSSet metadataObjectTypes;
@property (nonatomic) NSSet handledMetadataObjectTypes;
@property (nonatomic) NSArray metadataObjects;
- (void)dealloc;
- (id)time;
- (id)metadataObjectTypes;
- (id)initWithTime:metadataObjectTypes:handledMetadataObjectTypes:metadataObjects:;
- (id)handledMetadataObjectTypes;
- (id)metadataObjects;
+ (id)collectionWithTime:metadataObjectTypes:handledMetadataObjectTypes:metadataObjects:;
@end
