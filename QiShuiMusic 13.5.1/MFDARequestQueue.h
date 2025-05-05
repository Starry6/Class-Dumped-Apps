@interface MFDARequestQueue : MFRequestQueue
- (void).cxx_destruct;
- (id)initWithAccount:folderID:;
- (id)filterRequests:;
- (BOOL)processRequests:;
@end
