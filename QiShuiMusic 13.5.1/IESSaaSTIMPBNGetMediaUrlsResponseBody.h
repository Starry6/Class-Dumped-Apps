@interface IESSaaSTIMPBNGetMediaUrlsResponseBody : GPBMessage
@property (nonatomic) NSString uri;
@property (nonatomic) BOOL hasUri;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) NSMutableArray imgOptionsArray;
@property (nonatomic) Q imgOptionsArray_Count;
@property (nonatomic) NSMutableArray videoOptionsArray;
@property (nonatomic) Q videoOptionsArray_Count;
@property (nonatomic) NSMutableArray audioOptionsArray;
@property (nonatomic) Q audioOptionsArray_Count;
@property (nonatomic) NSMutableArray fileOptionsArray;
@property (nonatomic) Q fileOptionsArray_Count;
@property (nonatomic) NSMutableArray encryptedUrlsArray;
@property (nonatomic) Q encryptedUrlsArray_Count;
+ (id)descriptor;
@end
