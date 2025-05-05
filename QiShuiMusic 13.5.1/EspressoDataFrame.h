@interface EspressoDataFrame : NSObject
@property (nonatomic) NSMutableDictionary inputAttachments;
@property (nonatomic) NSMutableDictionary outputAttachments;
@property (nonatomic) NSMutableDictionary groundTruthAttachments;
@property (nonatomic) NSString function_name;
@property (nonatomic) NSArray inputAttachmentNames;
@property (nonatomic) NSArray outputAttachmentNames;
@property (nonatomic) NSArray groundTruthAttachmentNames;
- (id)init;
- (void).cxx_destruct;
- (void)loadFromDict:frameStorage:;
- (id)getInputAttachment:;
- (id)getOutputAttachment:;
- (id)getGroundTruthAttachment:;
- (id)getFunctionName;
- (id)inputAttachmentNames;
- (id)groundTruthAttachmentNames;
- (id)outputAttachmentNames;
- (id)inputAttachments;
- (void)setInputAttachments:;
- (id)outputAttachments;
- (void)setOutputAttachments:;
- (id)groundTruthAttachments;
- (void)setGroundTruthAttachments:;
- (id)function_name;
- (void)setFunction_name:;
@end
