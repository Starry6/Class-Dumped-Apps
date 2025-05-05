@interface MSVMessageParser : NSObject
@property (nonatomic) NSMutableData unhandledPartialObjectData;
@property (nonatomic) q unhandledObjectDataExpectedLength;
@property (nonatomic) NSMutableData unhandledPartialData;
@property (nonatomic) <MSVMessageParserDelegate> delegate;
- (void)setDelegate:;
- (void)processData:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_notifyDelegate:;
- (id)unhandledPartialObjectData;
- (void)setUnhandledPartialObjectData:;
- (long long)unhandledObjectDataExpectedLength;
- (void)setUnhandledObjectDataExpectedLength:;
- (id)unhandledPartialData;
- (void)setUnhandledPartialData:;
+ (id)createHeader:;
@end
