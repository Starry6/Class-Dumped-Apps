@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask
@property (nonatomic) NSString requestDataContentType;
@property (nonatomic) NSData requestDataPayload;
@property (nonatomic) BOOL forceToServer;
@property (nonatomic) NSURL priorOrderedURL;
@property (nonatomic) NSInteger absoluteOrder;
@property (nonatomic) NSString previousETag;
- (id)requestBody;
- (id)initWithURL:;
- (void)setPreviousETag:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (id)previousETag;
- (int)absoluteOrder;
- (id)initWithDataPayload:dataContentType:atURL:previousETag:;
- (void)setAbsoluteOrder:;
- (void)setPriorOrderedURL:;
- (BOOL)forceToServer;
- (void)setForceToServer:;
- (id)requestDataContentType;
- (void)setRequestDataContentType:;
- (id)requestDataPayload;
- (void)setRequestDataPayload:;
- (id)priorOrderedURL;
@end
