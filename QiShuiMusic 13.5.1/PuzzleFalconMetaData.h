@interface PuzzleFalconMetaData : NSObject
@property (nonatomic) NSArray filePaths;
@property (nonatomic) NSData falconData;
@property (nonatomic) IESFalconStatModel statModel;
@property (nonatomic) NSDictionary allHeaderFields;
@property (nonatomic) q statusCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)falconData;
- (void)setFalconData:;
- (void)setStatModel:;
- (id)statModel;
- (id)filePaths;
- (void).cxx_destruct;
- (void)setFilePaths:;
@end
