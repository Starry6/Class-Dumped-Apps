@interface GEOTileData : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) @ decodedRepresentation;
@property (nonatomic) Q length;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)data;
- (id)decodedRepresentation;
- (void)encodeToXPCDictionary:;
- (unsigned long long)hash;
- (id)initWithXPCDictionary:error:;
- (id)initWithDecodedRepresentation:;
- (id)initWithFileURL:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)fileURL;
- (unsigned long long)length;
- (void)_replaceFileURL:;
- (BOOL)isEqual:;
- (id)readDataWithError:;
@end
