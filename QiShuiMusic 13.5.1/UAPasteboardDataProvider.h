@interface UAPasteboardDataProvider : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uuid;
- (id)data;
- (void)setType:;
- (void)setUuid:;
- (id)type;
- (void).cxx_destruct;
- (void)setData:;
- (id)initWithData:type:;
- (void)getDataWithCompletionBlock:;
@end
