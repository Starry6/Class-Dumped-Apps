@interface NWURLLoaderHTTP : NSObject
@property (nonatomic) BOOL allowsWrite;
@property (nonatomic) NSObject<OS_nw_connection> underlyingConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)updateClient:;
- (void)readResponse:;
- (void)readDataOfMinimumIncompleteLength:maximumLength:completionHandler:;
- (void)writeData:complete:completionHandler:;
- (BOOL)allowsWrite;
- (id)underlyingConnection;
@end
