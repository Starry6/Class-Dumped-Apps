@interface AWELivePaidStreamADTrackPlugin : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)paidStream:willDisplayForBlockType:;
- (void)paidStream:actionForBlockType:completionHandler:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
@end
