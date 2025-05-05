@interface ToygerDocInfo : NSObject
@property (nonatomic) NSString docType;
@property (nonatomic) NSString pageNo;
@property (nonatomic) NSArray region;
@property (nonatomic) NSArray fields;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} faceRect;
- (id)pageNo;
- (void)setPageNo:;
- (id)init;
- (void)setFields:;
- (void)setRegion:;
- (id)region;
- (id)fields;
- (void).cxx_destruct;
- (id)faceRect;
- (void)setFaceRect:;
- (void)setDocType:;
- (id)docType;
@end
