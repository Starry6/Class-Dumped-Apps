@interface MPServerObjectDatabaseHLSAsset : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString hashedPersonID;
@property (nonatomic) NSURL playlistURL;
@property (nonatomic) NSURL keyCertificateURL;
@property (nonatomic) NSURL keyServerURL;
@property (nonatomic) NSNumber keyServerAdamID;
@property (nonatomic) NSString keyServerProtocolType;
@property (nonatomic) BOOL iTunesStoreStream;
- (id)identifier;
- (void).cxx_destruct;
- (id)keyServerURL;
- (id)playlistURL;
- (id)keyCertificateURL;
- (id)keyServerProtocolType;
- (id)keyServerAdamID;
- (BOOL)isiTunesStoreStream;
- (id)initWithSQLRowResult:;
- (id)hashedPersonID;
- (id)_initWithIdentifier:hashedPersonID:playlistURL:keyCertificateURL:keyServerURL:keyServerAdamID:keyServerProtocolType:isiTunesStoreStream:;
@end
