@interface IESLiveIMTransportDecoder : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) <IESLiveIMDecoder> nextDecoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)decode:completion:;
- (id)init;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
@end
