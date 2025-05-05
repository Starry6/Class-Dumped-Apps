@interface TLToneImportResponse : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSString toneIdentifier;
- (long long)statusCode;
- (id)toneIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusCode:toneIdentifier:;
@end
