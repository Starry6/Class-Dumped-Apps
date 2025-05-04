@interface AWEEnterpriseIMMessageCardBaseViewModel : NSObject
@property (nonatomic) NSDictionary imMessageDict;
@property (nonatomic) AWEEnterpriseIMMessageModel imMessageModel;
@property (nonatomic) NSMutableDictionary localExtDict;
@property (nonatomic) NSMutableDictionary syncExtDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)p_handleExt:withKey:;
- (void)setLocalExtDict:;
- (void)setSyncExtDict:;
- (void)setImMessageDict:;
- (void)setImMessageModel:;
- (void)configDataWithContent:ext:localExt:;
- (void)configIMMessageDataWithMessageInfo:;
- (id)localExtDict;
- (id)syncExtDict;
- (id)imMessageDict;
- (id)imMessageModel;
- (void).cxx_destruct;
@end
