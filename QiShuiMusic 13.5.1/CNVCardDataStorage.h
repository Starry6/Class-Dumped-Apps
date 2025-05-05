@interface CNVCardDataStorage : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendFormat:;
- (void)appendData:;
- (void)appendString:;
- (id)initWithData:;
- (void).cxx_destruct;
- (unsigned long long)estimatedDataLength;
- (unsigned long long)currentLength;
- (id)insertionMarker;
- (void)appendString:usingEncoding:;
- (void)insertString:atMarker:;
+ (id)storageWithData:;
@end
