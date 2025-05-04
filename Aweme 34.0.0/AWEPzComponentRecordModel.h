@interface AWEPzComponentRecordModel : NSObject
@property (nonatomic) NSNumber recordID;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString componentType;
@property (nonatomic) NSSet cTags;
@property (nonatomic) NSSet sTags;
- (id)cTags;
- (id)sTags;
- (id)initWithComponentID:componentType:cTags:sTags:recordID:;
- (void)setRecordID:;
- (id)componentType;
- (void).cxx_destruct;
- (id)recordID;
- (id)componentID;
@end
