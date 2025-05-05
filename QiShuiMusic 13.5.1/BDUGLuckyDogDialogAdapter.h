@interface BDUGLuckyDogDialogAdapter : NSObject
@property (nonatomic) NSMutableArray dialogObjMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerIDFromDialogObject:;
- (id)dialogObjMap;
- (void)enqueuePopUp:params:withShowBlock:;
- (void)finishPopUp:;
- (id)removeDialogFromMapWithKey:;
- (void)setDialogObjMap:;
- (id)init;
- (id)containerID;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
